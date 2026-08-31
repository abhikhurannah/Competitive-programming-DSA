<h2><a href="https://codeforces.com/contest/1363/problem/A" target="_blank" rel="noopener noreferrer">1363A — Odd Selection</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1363A](https://codeforces.com/contest/1363/problem/A) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Odd Selection</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Shubham has an array $$$a$$$ of size $$$n$$$, and wants to select exactly $$$x$$$ elements from it, such that their sum is odd. These elements do not have to be consecutive. The elements of the array are not guaranteed to be distinct.</p><p>Tell him whether he can do so.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ $$$(1\le t \le 100)$$$ — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$x$$$ $$$(1 \le x \le n \le 1000)$$$ — the length of the array and the number of elements you need to choose.</p><p>The next line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(1 \le a_i \le 1000)$$$ — elements of the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">Yes</span>" or "<span class="tex-font-style-tt">No</span>" depending on whether it is possible to choose $$$x$$$ elements such that their sum is odd.</p><p>You may print every letter in any case you want.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004189458798202448" id="id00017550322177034228" class="input-output-copier">Copy</div></div><pre id="id004189458798202448">5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00843486858144647" id="id006300771223055468" class="input-output-copier">Copy</div></div><pre id="id00843486858144647">Yes
No
Yes
Yes
No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$1$$$st case: We must select element $$$999$$$, and the sum is odd.</p><p>For $$$2$$$nd case: We must select element $$$1000$$$, so overall sum is not odd.</p><p>For $$$3$$$rd case: We can select element $$$51$$$.</p><p>For $$$4$$$th case: We must select both elements $$$50$$$ and $$$51$$$  — so overall sum is odd.</p><p>For $$$5$$$th case: We must select all elements  — but overall sum is not odd.</p></div>