# DB

- [Sql Interview Questions Interviewbit](https://www.interviewbit.com/sql-interview-questions/)
- [Ridhi Dutta DB doc](https://docs.google.com/document/d/1KZ5mxEwyWjnHyh7ZG8IJtalDpqf-zvRIUC0BS5mpZ-o/edit)
- [Mongodb cheetsheet traversymedia](https://gist.github.com/bradtraversy/f407d642bdc3b31681bc7e56d95485b6)

## SQLZOO Solutions 

- [SQLZOO](https://sqlzoo.net/wiki/SQL_Tutorial)

## Sections 

- [Select basic](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-basic)
- [Select name](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-name)
- [Select from world](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-from-world)
- [Select from nobel](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-from-nobel)
- [Select with select](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-from-select)
- [sum and count](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#sum-and-count)
- [Join](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#join)
- [More Join](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#more-join)
- [Using NULL](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#using-null)
- [Numeric example](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#numeric-example)
- [Window function](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#numeric-example)
- [Covid 19](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#covid-19)
- [Self Join](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#self-join)
- [Quiz](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#quiz)

### Select basic
1.
```
```
2.

### Select name
1.
```
SELECT name FROM world WHERE name LIKE 'Y%'
```
2.
```
SELECT name FROM world WHERE name LIKE '%y'
```
3.
```
SELECT name FROM world WHERE name LIKE '%x%'
```
4.
```
SELECT name FROM world WHERE name LIKE '%land'
```
5.
```
SELECT name FROM world WHERE name LIKE 'C%ia'
```
6.
```
SELECT name FROM world WHERE name LIKE '%oo%'
```
7.
```
SELECT name FROM world WHERE name LIKE '%a%a%a%'
```
8.
```
SELECT name FROM world
 WHERE name LIKE '_t%'
ORDER BY name
```
9.
```
SELECT name FROM world WHERE name LIKE '%o__o%'
```
10.
```
SELECT name FROM world WHERE name LIKE '____'
```
11.
```
SELECT name  FROM world WHERE name=capital;
```
12.
```
SELECT name
  FROM world
 WHERE capital=concat(name,' City');
```
13.
```
select capital,name from world where capital like concat('%',name,'%')
```
14.
```
SELECT capital,name FROM world WHERE capital LIKE concat('%', name, '%') AND capital > name;
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
1.
```
```
### Select from world
1.
```
SELECT name, continent, population FROM world
```
2.
```
SELECT name FROM world WHERE population > 200000000
```
3.
```
select name , gdp/population from world where population > 200000000;
```
4.
```
select name , population /1000000 from world where continent =  'South America';
```
5.
```
select name , population from world where name in ('France','Germany','Italy')
```
6.
```
select name from world where name like '%United%';
```
7.
```
select name ,population , area from world where area > 3000000 or population > 250000000
```
8.
```
select name,population,area from world where area > 3000000 xor population > 250000000;
```
9.
```
```
10.
```
```
11.
```
```
12.
```
```
13.
```
```
### Select from nobel
### Select from select
### Sum and count 
1.
```
SELECT SUM(population) FROM world
```
2.
```
select distinct(continent) from world
```
3.
```
select sum(gdp) from world where continent='Africa'
```
4.
```
select count(name) from world where area >=1000000
```
5.
```
select sum(population) from world where name in ('Estonia', 'Latvia', 'Lithuania')
```
6.
```
select continent,count(name) from world group by continent;
```
7.
```
select continent,count(name) from world  where  population > 10000000 group by continent 
```
8.
```
select continent from world group by continent having sum(population)>100000000
```


### Join
### More join
### Using NULL
### Numeric example 
### Window function
### Self join 
### Covid 19
### Quiz   



