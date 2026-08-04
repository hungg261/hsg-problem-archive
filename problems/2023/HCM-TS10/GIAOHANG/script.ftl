<#-- Subtask 1 -->

<#list 1..5 as i>
gen ${10+i} --min_n=2 --max_n=2 --max_m=10 > $
</#list>

<#list 1..9 as i>
gen ${20+i} --min_n=2 --max_n=2 > $
</#list>

<#list 1..1 as i>
gen ${20+i} --min_n=2 --max_n=2 --special=1 > $
</#list>

<#-- Subtask 2 -->

<#list 1..2 as i>
gen ${30+i} --max_n=10000 --max_m=10 > $
</#list>

<#list 1..3 as i>
gen ${40+i} --max_n=10000 > $
</#list>

<#list 1..2 as i>
gen ${50+i} --min_n=10000 --max_n=10000 --special=1 > $
</#list>

<#list 1..8 as i>
gen ${60+i} --min_n=10000 --max_n=10000 > $
</#list>

<#-- Subtask 3 -->

<#list 1..1 as i>
gen ${70+i} --max_m=10 > $
</#list>

<#list 1..2 as i>
gen ${80+i} > $
</#list>

<#list 1..2 as i>
gen ${90+i} --min_n=300000 --special=1 > $
</#list>

<#list 1..5 as i>
gen ${100+i} --min_n=300000 > $
</#list>