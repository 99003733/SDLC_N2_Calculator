# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | mode switch working for special operations|  mode==1   | shows mode menu | shows mode menu |Requirement based|
|  H_02       |  mode switch working |  mode==2   | Error | Error | Scenario based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_0111    | Adding two numbers | num1= 30, num2=20 |  result=50 | result=50 |Requirement based |
|  L_0121    | Subtracting two numbers | num1= 0, num2=3 |  result=-3 | result=-3 |Requirement based |
|  L_0131    | Multiplying two numbers | num1= 1, num2=0 |  result=0 | result=0 |Requirement based |
|  L_0141    | Dividing two numbers | num1= 27, num2=9 |  result=3 | result=3 |Requirement based |
|  L_0211    | Adding two negative numbers | num1=-750, num2=-7500 | result=-8250 | result=-8250 | Scenario based |
|  L_0212    | Adding one negative number and one positive number| num1=10, num2=-20 | result=-10 | result=-10 | Scenario based |
|  L_0213    | Adding one positive number and one negative number | num1=-98, num2=20 | result=-78 | result=-78 | Scenario based |
|  L_0221    | Subtracting two positive numbers | num1=13, num2=4 | result=9| result=9 | Scenario based |
|  L_0222    | Subtracting positive number from a negative number | num1=-45, num2=6 | result=-51| result=-51 | Scenario based |
|  L_0223    | Subtracting two negative numbers | num1=-7985, num2=-7745 | result=-240| result=-240 | Scenario based |
|  L_0231    | Multiplying one positive number with one negative number | num1=-20, num2=3 | result=-60 | result=-60 | Scenario based |
|  L_0232    | Multiplying one negative number with one positive number | num1=8745, num2=-83 | result=-725835 | result=-725835 | Scenario based |
|  L_0233    | Multiplying two negative numbers | num1=-99, num2=-999 | result=98901 | result=98901 | Scenario based |
|  L_0241    | Dividing by zero | num1=1, num2=0 | result=-1(for error) | result=-1 | Scenario based |
|  L_0242    | Dividing two negative number | num1=-135, num2=-3 | result=45 | result=45 | Scenario based |
|  L_0243    | Dividing negative number by positive number | num1=-28, num2=14 | result=-2 | result=-2 | Scenario based |
|  L_0244    | Dividing positive number by negative number | num1=96, num2=-12 | result=-8 | result=-8 | Scenario based |
|  L_0311     | Multiplying two 8 digit numbers | num1=100000000,num2=99999999 | result=-1| result=-1(for Error) | Boundary based |
|  L_0411    | Calculating Permutations | n=5,r=1 | permutations=5 | permutations=5 | Requirement based |
|  L_0421    | Calculating Combinations | n=2,r=1 | combinations=2 | combinations=2 | Requirement based |
|  L_0511    | If number of required permutations is greater than total number of objects | n=4,r=6 | permutations=-1(for Error) | permutations=-1 | Scenario based |
|  L_0521    | If number of required combinations is greater than total number of objects | n=4,r=10 | combinations=-1(for Error) | combinations=-1 | Scenario based |
|  L_0711    | Calculating Acceleration | v=10, u=5, t=5 | accefunc = 1 | accefunc = 1 | Scenario based |
|  L_0721    | Finding capacitive Reactance | f=100, C= 5 | react= 0.00031830| react = 0.00031830 | Requirement based |
|  L_0731    | Finding Circular Velocity | r = 100, t = 2 | velocity= 314.159265 | velocity = 314.159265 | Requirement based |
|  L_0741    | Finding Circular Velocity | M1 = 1000, M2 = 1000, D = 2 | Force= 0.000016675 | Force = 0.000016675 | Requirement based |
|  L_0751    | Finding Projectile motion | V = 25, angle=15 | Range = 31.887755 | Range  = 31.887755 | Requirement based |
|  L_0811    | Calculating profit and loss | sp = 120, cp=12 | res = 108 | res  = 108 | Requirement based |
|  L_0821    | Calculating Discount | mp = 100, d=15 | disc_price = 85 | disc_price  = 85 | Requirement based |
|  L_0911    | For Matrix Determinant | [10 ,20 ,30; 5, 6, 7; 1, 0, 0] | Det=80 | Det=80 | Requirement based |
|  L_0921    | Matrix Addition | MAT1=[9 ,30 ,10 ;-2 ,8 ,10 ;10 ,-5 ,50 ], MAT2=[10 ,9 ,-5 ;8 ,2 ,0 ;30 ,4 ,10] | ADD_MAT=[19 ,39 ,5 ;6 ,10 ,10 ;40 ,-1, 60] | ADD_MAT=[19 ,39 ,5 ;6 ,10 ,10 ;40 ,-1, 60] | Requirement based | 
|  L_0931    | Matrix Subtraction | MAT1=[9 ,3 ,10 ;-2 ,8 ,10 ;10 ,-5 ,50 ], MAT2=[1 ,9 ,-5 ;8 ,2 ,0 ;30 ,4 ,10] | SUB_MAT=[8 ,-6 ,15 ;-10 ,6 ,10 ;-20 ,-9 , 40] | SUB_MAT=[8 ,-6 ,15 ;-10 ,6 ,10 ;-20 ,-9 , 40] | Requirement based | 
| L_01011     | Matrix addition or subtraction | am=2 , an=3 ,bm=2 ,bn=2 | Error | Error | Scenario based |
| L_01012     | Matrix multiply | am=1 , an=3 ,bm=2 ,bn=1 | Error | Error | Scenario based |
|  L_1111    |Calculate simple interest | principal amount=10000, Time period=2, rate of interest=8 | result=1600 | result=1600 | Requirement based |
|  L_1121    |Calculate compound interest | principal amount=10000, Time period=2, rate of interest=8 | result=1728 | result=1728 | Requirement based |
|  L_1131    |Calculate EMI amount | principal amount=10000, Time period=2, rate of interest=8 | result=10855 | result=10855 | Requirement based |
|  L_1141    |Calculate Loan amount | principal amount=10000, Time period=2, rate of interest=8 | result=10855 | result=10855 | Requirement based |
|  L_1151    |Calculate simple interest | principal amount=10000, Time period=3, rate of interest=6 | result=1800 | result=2000 | Scenario based |
|  L_1161    |Calculate compound interest | principal amount=30000, Time period=4, rate of interest=9 | result=12942 | result=14000 | Scenario based |
|  L_1171    |Calculate EMI amount | principal amount=25000, Time period=2, rate of interest=8 | result=1131 | result=1500 | Scenario based |
|  L_1181    |Calculate Loan amount | principal amount=100000, Time period=4, rate of interest=7 | result=2395 | result=2000 | Scenario based |
|  L_1211    |Calculate exponent | value=3 | result=20.08 | result=20.08 | Requirement based |
|  L_1221    |Calculate logarithm | value=10 | result=1 | result=1 | Requirement based |
|  L_1231    |Calculate squareroot | value=144 | result=12 | result=12 | Requirement based |
|  L_1311    |Calculate exponent | value=5 | result=148.41 | result=100 |Scenario based |
|  L_1321    |Calculate logarithm | value=-10 | result=Error | result=1 |Scenario based |
|  L_1331    |Calculate squareroot | value=7878 | result=88.75 | result=70.3 |Scenario based |
|  L_1411    | Area of square operation | num1= 3 |  result=9 | result=9 |Requirement based |
|  L_1421    | Area of circle operation | num1= 4 |  result=50 | result=50 |Requirement based |
|  L_1431   | Area of sphere operation | num1= 9 |  result=113 | result=113 |Requirement based |
|  L_1441    | volume of square operation | num1= 1 | result=4 | result=4 |Requirement based |
|  L_1511    | Area of square operation | num1= 3 |  result=9 | result=95 |Scenario based |
|  L_1521    | Area of circle operation | num1= 4 |  result=50 | result=505 |Scenario based |
|  L_1531    | Area of sphere operation | num1= 9 |  result=113 | result=1139 |Scenario based |
|  L_1512    | volume of square operation | num1= 1 | result=4 | result=44 |Scenario based |







