<h2><a href="https://codeforces.com/contest/1362/problem/C" target="_blank" rel="noopener noreferrer">1362C — Johnny and Another Rating Drop</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1362C](https://codeforces.com/contest/1362/problem/C) |

## Topics
`bitmasks` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Johnny and Another Rating Drop</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The last contest held on Johnny's favorite competitive programming platform has been received rather positively. However, Johnny's rating has dropped again! He thinks that the presented tasks are lovely, but don't show the truth about competitors' skills.</p><p>The boy is now looking at the ratings of consecutive participants written in a binary system. He thinks that the more such ratings differ, the more unfair is that such people are next to each other. He defines the difference between two numbers as the number of bit positions, where one number has zero, and another has one (we suppose that numbers are padded with leading zeros to the same length). For example, the difference of $$$5 = 101_2$$$ and $$$14 = 1110_2$$$ equals to $$$3$$$, since $$$0101$$$ and $$$1110$$$ differ in $$$3$$$ positions. Johnny defines the unfairness of the contest as the sum of such differences counted for neighboring participants.</p><p>Johnny has just sent you the rating sequence and wants you to find the unfairness of the competition. You have noticed that you've got a sequence of <span class="tex-font-style-bf">consecutive</span> integers from $$$0$$$ to $$$n$$$. That's strange, but the boy stubbornly says that everything is right. So help him and find the desired unfairness for received numbers.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains one integer $$$t$$$ ($$$1 \leq t \leq 10\,000$$$) — the number of test cases. The following $$$t$$$ lines contain a description of test cases.</p><p>The first and only line in each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines. For each test case, you should output a single line with one integer — the unfairness of the contest if the rating sequence equals to $$$0$$$, $$$1$$$, ..., $$$n - 1$$$, $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004353902875364831" id="id00980733278186552" class="input-output-copier">Copy</div></div><pre id="id004353902875364831">5
5
7
11
1
2000000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009941128876659039" id="id0003711829379825693" class="input-output-copier">Copy</div></div><pre id="id009941128876659039">8
11
19
1
3999999999987
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$n = 5$$$ we calculate unfairness of the following sequence (numbers from $$$0$$$ to $$$5$$$ written in binary with extra leading zeroes, so they all have the same length): </p><ul> <li> $$$000$$$ </li><li> $$$001$$$ </li><li> $$$010$$$ </li><li> $$$011$$$ </li><li> $$$100$$$ </li><li> $$$101$$$ </li></ul><p>The differences are equal to $$$1$$$, $$$2$$$, $$$1$$$, $$$3$$$, $$$1$$$ respectively, so unfairness is equal to $$$1 + 2 + 1 + 3 + 1 = 8$$$.</p></div>