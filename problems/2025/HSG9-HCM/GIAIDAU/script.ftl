<#list 1..3 as i>
gen ${10+i} --min_n=3 --max_n=10 --max_val=10 --min_q=5 --max_q=20 > $
</#list>

<#list 1..7 as i>
gen ${20+i} --min_n=100 --max_n=100 --min_q=100 --max_q=100 > $
</#list>

<#list 1..10 as i>
gen ${30+i} --min_n=1000 --max_n=1000 --min_q=10000 --min_q=10000 --max_q=10000 > $
</#list>

<#list 1..20 as i>
gen ${40+i} --min_n=100000 --max_n=100000 --min_q=100000 --max_q=100000 --min_val=800000000 > $
</#list>
