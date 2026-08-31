<h2><a href="https://codeforces.com/contest/1300/problem/A" target="_blank" rel="noopener noreferrer">1300A — Non-zero</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1300A](https://codeforces.com/contest/1300/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Non-zero</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Guy-Manuel and Thomas have an array $$$a$$$ of $$$n$$$ integers [$$$a_1, a_2, \dots, a_n$$$]. In one step they can add $$$1$$$ to any element of the array. Formally, in one step they can choose any integer index $$$i$$$ ($$$1 \le i \le n$$$) and do $$$a_i := a_i + 1$$$.</p><p><span class="tex-font-style-it">If either the sum or the product of all elements in the array is equal to zero, Guy-Manuel and Thomas do not mind to do this operation one more time.</span></p><p>What is the minimum number of steps they need to do to make both the sum and the product of all elements in the array <span class="tex-font-style-bf">different from zero</span>? Formally, find the minimum number of steps to make $$$a_1 + a_2 +$$$ $$$\dots$$$ $$$+ a_n \ne 0$$$ and $$$a_1 \cdot a_2 \cdot$$$ $$$\dots$$$ $$$\cdot a_n \ne 0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. </p><p>The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^3$$$). The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 100$$$) — the size of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-100 \le a_i \le 100$$$) — elements of the array .</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of steps required to make both sum and product of all elements in the array different from zero.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014929024298554427" id="id003302652370757807" class="input-output-copier">Copy</div></div><pre id="id0014929024298554427">4
3
2 -1 -1
4
-1 0 0 1
2
-1 2
3
0 -2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005378764405277934" id="id008164924211726953" class="input-output-copier">Copy</div></div><pre id="id005378764405277934">1
2
0
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the sum is $$$0$$$. If we add $$$1$$$ to the first element, the array will be $$$[3,-1,-1]$$$, the sum will be equal to $$$1$$$ and the product will be equal to $$$3$$$.</p><p>In the second test case, both product and sum are $$$0$$$. If we add $$$1$$$ to the second and the third element, the array will be $$$[-1,1,1,1]$$$, the sum will be equal to $$$2$$$ and the product will be equal to $$$-1$$$. It can be shown that fewer steps can't be enough.</p><p>In the third test case, both sum and product are non-zero, we don't need to do anything.</p><p>In the fourth test case, after adding $$$1$$$ twice to the first element the array will be $$$[2,-2,1]$$$, the sum will be $$$1$$$ and the product will be $$$-4$$$.</p></div>