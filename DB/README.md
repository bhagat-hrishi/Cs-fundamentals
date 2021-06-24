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
- [Select within select](https://github.com/bhagat-hrishi/Cs-fundamentals/tree/main/DB#select-from-select)
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
SELECT population FROM world WHERE name = 'Germany';
```
2.
```
SELECT name, population FROM world WHERE name IN ( 'Sweden', 'Norway','Denmark');
```
3.
```
SELECT name, area FROM world WHERE area BETWEEN 200000 AND 250000
```


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
1
```
SELECT yr, subject, winner FROM nobel  WHERE yr = 1950
```
2
```
SELECT winner FROM nobel  WHERE yr = 1962 AND subject = 'Literature'
```
3
```
select yr,subject from nobel where winner ='Albert Einstein' 
```
4
```
select winner from nobel where yr>=2000 and subject='Peace'
```
5
```
select * from nobel where subject='Literature' and yr>=1980 and yr<=1989;
```
6
```
SELECT * FROM nobel WHERE  winner IN ('Theodore Roosevelt',
                                       'Woodrow Wilson',
                                        'Jimmy Carter',
                                        'Barack Obama'
                                      )
```
7
```
select winner from nobel where winner like 'John%'
```
8
```
select yr,subject,winner from nobel  where yr=1980 and subject='Physics'                      
                                                      or 
                                          yr=1984  and  subject='Chemistry'
```
9
```
select yr,subject,winner from nobel where yr=1980 and  subject NOT IN('Chemistry','Medicine')
```
10
```
select yr, subject,winner from nobel where subject='Medicine' and yr<1910
                                                     or 
                                           subject='Literature' and yr>=2004
```
#### Harder Questions
11
```
select * from nobel where winner = 'PETER GRÜNBERG'
```
12 
```
select * from nobel where winner = 'EUGENE O''NEILL'
```
13
```
select winner , yr , subject from nobel where winner like 'Sir%' order by yr desc,winner
```
14
```
```
### Select within select
1. 
```
SELECT name FROM world
  WHERE population >
     (SELECT population FROM world
      WHERE name='Russia')
```
2. 
```
select name from world where continent='Europe' 
                                   and 
                            gdp/population > (Select gdp/population from world where name = 'United Kingdom')

```
3. 
```
select name , continent from world 
    where continent in (Select continent from world where name in ('Argentina','Australia')) 
    order by name;
```
4. 
```
select name , population from world 
                    where population > (select population  from world where name='Canada') and 
                    population <  (select population from world where name ='Poland')
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
1.
```
SELECT name, DAY(whn),
 confirmed, deaths, recovered
 FROM covid
WHERE name = 'Spain'
AND MONTH(whn) = 3
ORDER BY whn
```
2.
```

```
3.
```
```
4.
```
```
5.
```
```
### Quiz   



