<#-- Subtask 1 -->
<#list 1..3 as i>
gen ${i} --max_n=1 --max_val=100 > $
</#list>

<#list 1..2 as i>
gen ${i} --max_n=3 --max_val=100 > $
</#list>

<#list 1..3 as i>
gen ${i} --min_n=3 --max_n=3 --max_val=100 > $
</#list>

<#-- Subtask 2 -->
<#list 1..5 as i>
gen ${i} --min_n=5 --max_n=10 --max_val=10000 > $
</#list>

<#list 1..5 as i>
gen ${i} --min_n=10 --max_n=20 --max_val=10000 > $
</#list>

<#list 1..2 as i>
gen ${i} --min_n=20 --max_n=20 --max_val=10000 > $
</#list>