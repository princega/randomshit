drop table t1;
drop table t2;

create table t2(
DeptCode numeric primary key,
DeptName varchar(10)
);

insert into t2(DeptCode, DeptName)
values(101, 'CSE');

insert into t2(DeptCode, DeptName)
values(102, 'EEE');

insert into t2(DeptCode, DeptName)
values(103, 'FC');

insert into t2(DeptCode, DeptName)
values(104, 'MECH');

create table t1(
SID numeric primary key,
SNAME varchar(50),
DeptCode numeric,
CREDIT numeric,
foreign key (DeptCode) references t2(DeptCode)
);

insert into t1 (SID, SNAME, DeptCode, CREDIT)
values (101, 'John', 101, 12);

insert into t1 (SID, SNAME, DeptCode, CREDIT)
values (102, 'Rohit', 102, 14);

insert into t1 (SID, SNAME, DeptCode, CREDIT)
values (103, 'Alya', 103, 20);

insert into t1 (SID, SNAME, DeptCode, CREDIT)
values (104, 'Yusuf', 104, 10);

insert into t2(SID, SNAME, DeptCode, CREDIT)
values (105, 'Yahoo', 107, 16);
