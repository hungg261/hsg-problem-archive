<#list 1..1 as i>
gen ${10+i} --min_n=1 --max_n=1 > $
</#list>

<#list 1..3 as i>
gen ${20+i} --min_n=2 --max_n=10 --max_val=10 > $
</#list>

<#list 1..6 as i>
gen ${30+i} --min_n=999 --max_n=1000 --max_val=10 > $
</#list>

<#list 1..10 as i>
gen ${40+i} --min_n=1000 --max_n=1000 > $
</#list>

<#list 1..2 as i>
gen ${50+i} --min_n=10000 --max_n=200000 --max_val=10 > $
</#list>

<#list 1..1 as i>
gen ${60+i} --min_n=200000 --max_n=200000 --sorted=-1 > $
</#list>

<#list 1..1 as i>
gen ${70+i} --min_n=200000 --max_n=200000 --sorted=1 > $
</#list>

<#list 1..8 as i>
gen ${80+i} --min_n=200000 --max_n=200000 --sorted=-1 --extra=1 > $
</#list>

<#list 1..8 as i>
gen ${90+i} --min_n=200000 --max_n=200000 > $
</#list>