<#list 1..5 as i>
gen ${i} --min_n=2 --max_n=10 --max_val=20 --gcd=-5 > $
</#list>

<#list 1..5 as i>
gen ${i} --min_n=100 --max_n=100 --max_val=100 --gcd=-5 > $
</#list>

<#list 1..10 as i>
gen ${i} --min_n=1000 --max_n=1000 --gcd=-1000 > $
</#list>

<#list 1..5 as i>
gen ${i} --min_n=10000 --max_n=100000 --gcd=-1000 > $
</#list>

<#list 1..15 as i>
gen ${i} --min_n=100000 --max_n=100000 --gcd=-1000 > $
</#list>
