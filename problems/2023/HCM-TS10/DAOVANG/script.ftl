<#-- Subtask 1 -->

<#list 1..3 as i>
gen ${i} --min_k=1 --max_k=1 --max_n=10 > $
</#list>

<#list 1..3 as i>
gen ${i} --min_k=1 --max_k=1 --max_n=1000 > $
</#list>

<#list 1..4 as i>
gen ${i} --min_k=1 --max_k=1 --min_n=1000 --max_n=1000 > $
</#list>

<#-- Subtask 2 -->

<#list 1..3 as i>
gen ${i} --min_k=2 --max_k=2 --max_n=10000 > $
</#list>

<#list 1..7 as i>
gen ${i} --min_k=2 --max_k=2 --min_n=10000 --max_n=10000 > $
</#list>

<#-- Subtask 3 -->

<#list 1..10 as i>
gen ${i} --min_k=3 --max_k=20 > $
</#list>

<#list 1..10 as i>
gen ${i} --min_k=19 --min_n=50000 > $
</#list>