<h2><a href="https://codeforces.com/contest/2014/problem/A" target="_blank" rel="noopener noreferrer">2014A — Robin Helps</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2014A](https://codeforces.com/contest/2014/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Robin Helps</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it">There is a little bit of the outlaw in everyone, and a little bit of the hero too.</span></div></div><p><span class="tex-font-style-it">The heroic outlaw Robin Hood is famous for taking from the rich and giving to the poor.</span></p><p>Robin encounters $$$n$$$ people starting from the $$$1$$$-st and ending with the $$$n$$$-th. The $$$i$$$-th person has $$$a_i$$$ gold. If $$$a_i \ge k$$$, Robin will take all $$$a_i$$$ gold, and if $$$a_i=0$$$, Robin will give $$$1$$$ gold if he has any. Robin starts with $$$0$$$ gold.</p><p>Find out how many people Robin gives gold to.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1\leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$, $$$k$$$ ($$$1 \le n \le 50, 1 \le k \le 100$$$) — the number of people and the threshold at which Robin Hood takes the gold.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 100$$$) — the gold of each person.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer, the number of people that will get gold from Robin Hood.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0000031939663049096456" id="id004133725528821123" class="input-output-copier">Copy</div></div><pre id="id0000031939663049096456"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2</div><div class="test-example-line test-example-line-odd test-example-line-1">2 0</div><div class="test-example-line test-example-line-even test-example-line-2">3 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 0 0</div><div class="test-example-line test-example-line-odd test-example-line-3">6 2</div><div class="test-example-line test-example-line-odd test-example-line-3">0 3 0 0 0 0</div><div class="test-example-line test-example-line-even test-example-line-4">2 5</div><div class="test-example-line test-example-line-even test-example-line-4">5 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008080328058291086" id="id00011242021375895028" class="input-output-copier">Copy</div></div><pre id="id008080328058291086">1
2
3
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Robin takes $$$2$$$ gold from the first person and gives a gold to the second person.</p><p>In the second test case, Robin takes $$$3$$$ gold and gives $$$1$$$ gold to each of the next $$$2$$$ people.</p><p>In the third test case, Robin takes $$$3$$$ gold and so only gives gold to $$$3$$$ other people.</p></div>