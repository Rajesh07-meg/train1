create or replace procedure Pro_Dept
is
 CURSOR DEPT_CUR 
	IS select  * from departments;   
begin
    FOR i in DEPT_CUR loop
     dbms_output.put_line(i.department_id||' '||i.department_name||' '||i.manager_id||' '||i.location_id);
    end loop;
end;
/