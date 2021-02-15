# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | mode switch working for special operations|  mode==1   | shows mode menu | shows mode menu |Requirement based|
|  H_02       |  mode switch working |  mode==2   | Error | Error | Scenario based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_011    | Adding two numbers | num1= 30, num2=20 |  result=50 | result=50 |Requirement based |
|  L_012    | Subtracting two numbers | num1= 0, num2=3 |  result=-3 | result=-3 |Requirement based |
|  L_013    | Multiply two numbers | num1= 1, num2=0 |  result=0 | result=0 |Requirement based |
|  L_014    | Dividing two numbers | num1= 1, num2=0 |  Error | Error |Requirement based |
|  L_021    | Adding two numbers | num1=750, num2=7500 | result=1500 | result=8250 | Scenario based |
|  L_022    | Subtract two numbers | num1=1000, num2=900 | result=1| result=1900 | Scenario based |
|  L_023    | Multiply two numbers | num1=2, num2=5 | result=2 | result=10 | Scenario based |
|  L_024    | Dividing two numbers | num1=2, num2=2 | result=3 | result=1 | Scenario based |
|  L_03     | Multiplying two 8 digit numbers | num1=100000000,num2=99999999 | result=9999999900000000 | Error | Boundary based |
|  L_041    | Calculating Permutations | n=5,r=1 | permres=5 | permres=5 | Requirement based |
|  L_042    | Calculating Combinations | n=2,r=1 | combres=2 | combres=2 | Requirement based |
|  L_051    | Calculating Permutations | n=6,r=4 | permres=10 | permres=15 | Scenario based |
|  L_052    | Calculating Combinations | n=10,r=4 | combres=40 | combres=210 | Scenario based |
|  L_06     | For both Permutation and combination | n=2, r=5 | Error | Error | Boundary based |
|  L_071    | Calculating Acceleration | v=10, u=5, t=5 | accefunc = 1 | accefunc = 1 | Scenario based |
|  L_072    | Finding capacitive Reactance | f=100, C= 5 | react= 0.00031830| react = 0.00031830 | Requirement based |
|  L_073    | Finding Circular Velocity | r = 100, t = 2 | velocity= 314.159265 | velocity = 314.159265 | Requirement based |
|  L_074    | Finding Circular Velocity | M1 = 1000, M2 = 1000, D = 2 | Force= 0.000016675 | Force = 0.000016675 | Requirement based |
|  L_075    | Finding Projectile motion | V = 25, angle=15 | Range = 31.887755 | Range  = 31.887755 | Requirement based |
|  L_081    | Calculating profit and loss | sp = 120, cp=12 | res = 108 | res  = 108 | Requirement based |
|  L_082    | Calculating Discount | mp = 100, d=15 | disc_price = 85 | disc_price  = 85 | Requirement based |

