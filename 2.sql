
define
cursor rr
is select salary from employee;
v2 number(10):=&o;
begin
for i in rr loop
  if i.s<5000 then v2:=i.s+i.s*0.1;
  dbms_output.put_line(v2);
  end if;
  end loop;
end;
/