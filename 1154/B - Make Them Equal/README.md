<h2><a href="https://codeforces.com/contest/1154/problem/B" target="_blank" rel="noopener noreferrer">1154B — Make Them Equal</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1154B](https://codeforces.com/contest/1154/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Make Them Equal</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ integers.</p><p>You can choose any non-negative integer $$$D$$$ (i.e. $$$D \ge 0$$$), and for each $$$a_i$$$ you can:</p><ul> <li> add $$$D$$$ (only once), i. e. perform $$$a_i := a_i + D$$$, or </li><li> subtract $$$D$$$ (only once), i. e. perform $$$a_i := a_i - D$$$, or </li><li> leave the value of $$$a_i$$$ unchanged. </li></ul><p>It is possible that after an operation the value $$$a_i$$$ becomes negative.</p><p>Your goal is to choose such <span class="tex-font-style-bf">minimum non-negative integer</span> $$$D$$$ and perform changes in such a way, that all $$$a_i$$$ are equal (i.e. $$$a_1=a_2=\dots=a_n$$$).</p><p>Print the required $$$D$$$ or, if it is impossible to choose such value $$$D$$$, print <span class="tex-font-style-tt">-1</span>.</p><p>For example, for array $$$[2, 8]$$$ the value $$$D=3$$$ is minimum possible because you can obtain the array $$$[5, 5]$$$ if you will add $$$D$$$ to $$$2$$$ and subtract $$$D$$$ from $$$8$$$. And for array $$$[1, 4, 7, 7]$$$ the value $$$D=3$$$ is also minimum possible. You can add it to $$$1$$$ and subtract it from $$$7$$$ and obtain the array $$$[4, 4, 4, 4]$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of elements in $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 100$$$) — the sequence $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the <span class="tex-font-style-bf">minimum non-negative integer</span> value $$$D$$$ such that if you add this value to some $$$a_i$$$, subtract this value from some $$$a_i$$$ and leave some $$$a_i$$$ without changes, all obtained values become equal.</p><p>If it is impossible to choose such value $$$D$$$, print <span class="tex-font-style-tt">-1</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007163472066032794" id="id00556135047334117" class="input-output-copier">Copy</div></div><pre id="id0007163472066032794">6
1 4 4 7 4 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007335176967927104" id="id00859828472968437" class="input-output-copier">Copy</div></div><pre id="id0007335176967927104">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004356041417999934" id="id0001834750958450737" class="input-output-copier">Copy</div></div><pre id="id0004356041417999934">5
2 2 5 2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007129622327365055" id="id007577026734305006" class="input-output-copier">Copy</div></div><pre id="id007129622327365055">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008552657948735372" id="id006786924483319823" class="input-output-copier">Copy</div></div><pre id="id008552657948735372">4
1 3 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003207136089020226" id="id005519369351294379" class="input-output-copier">Copy</div></div><pre id="id003207136089020226">-1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009775765337463687" id="id00898490222601696" class="input-output-copier">Copy</div></div><pre id="id009775765337463687">2
2 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007379704201729309" id="id009147342355787873" class="input-output-copier">Copy</div></div><pre id="id0007379704201729309">3
</pre></div></div></div>