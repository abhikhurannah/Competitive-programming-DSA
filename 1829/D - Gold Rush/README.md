<h2><a href="https://codeforces.com/contest/1829/problem/D" target="_blank" rel="noopener noreferrer">1829D — Gold Rush</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1829D](https://codeforces.com/contest/1829/problem/D) |

## Topics
`brute force` `dfs and similar` `dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. Gold Rush</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Initially you have a single pile with $$$n$$$ gold nuggets. In an operation you can do the following: </p><ul> <li> Take any pile and split it into two piles, so that one of the resulting piles has exactly twice as many gold nuggets as the other. (All piles should have an integer number of nuggets.) </li></ul> <center> <img class="tex-graphics" src="https://espresso.codeforces.com/89d0bd70b2b86d29bcf49af918569568ff949cf6.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"><p><span class="tex-font-size-small">One possible move is to take a pile of size $$$6$$$ and split it into piles of sizes $$$2$$$ and $$$4$$$, which is valid since $$$4$$$ is twice as large as $$$2$$$.</span> </p></center> Can you make a pile with <span class="tex-font-style-bf">exactly</span> $$$m$$$ gold nuggets using zero or more operations?</div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 10^7$$$) — the starting and target pile sizes, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if you can make a pile of size exactly $$$m$$$, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009358265838227633" id="id008121066816853927" class="input-output-copier">Copy</div></div><pre id="id009358265838227633"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">6 4</div><div class="test-example-line test-example-line-even test-example-line-2">9 4</div><div class="test-example-line test-example-line-odd test-example-line-3">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">18 27</div><div class="test-example-line test-example-line-odd test-example-line-5">27 4</div><div class="test-example-line test-example-line-even test-example-line-6">27 2</div><div class="test-example-line test-example-line-odd test-example-line-7">27 10</div><div class="test-example-line test-example-line-even test-example-line-8">1 1</div><div class="test-example-line test-example-line-odd test-example-line-9">3 1</div><div class="test-example-line test-example-line-even test-example-line-10">5 1</div><div class="test-example-line test-example-line-odd test-example-line-11">746001 2984004</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013360572596878495" id="id0016338873569337076" class="input-output-copier">Copy</div></div><pre id="id0013360572596878495">YES
YES
NO
NO
YES
YES
NO
YES
YES
NO
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case is pictured in the statement. We can make a pile of size $$$4$$$.</p><p>In the second test case, we can perform the following operations: $$$\{\color{red}{9}\} \to \{\color{red}{6},3\} \to \{4,2,3\}$$$. The pile that is split apart is colored red before each operation.</p><p>In the third test case, we can't perform a single operation.</p><p>In the fourth test case, we can't end up with a larger pile than we started with.</p></div>