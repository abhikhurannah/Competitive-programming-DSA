<h2><a href="https://codeforces.com/contest/1775/problem/C" target="_blank" rel="noopener noreferrer">1775C — Interesting Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1775C](https://codeforces.com/contest/1775/problem/C) |

## Topics
`bitmasks` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Interesting Sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Petya and his friend, robot Petya++, like to solve exciting math problems.</p><p>One day Petya++ came up with the numbers $$$n$$$ and $$$x$$$ and wrote the following equality on the board: $$$$$$n\ \&\ (n+1)\ \&\ \dots\ \&\ m = x,$$$$$$ where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>. Then he suggested his friend Petya find such a minimal $$$m$$$ ($$$m \ge n$$$) that the equality on the board holds.</p><p>Unfortunately, Petya couldn't solve this problem in his head and decided to ask for computer help. He quickly wrote a program and found the answer.</p><p>Can you solve this difficult problem?</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/4a5e1ab1c08f0400bd260e438330e662751bdc07.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 2000$$$). The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$n$$$, $$$x$$$ ($$$0\le n, x \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For every test case, output the smallest possible value of $$$m$$$ such that equality holds.</p><p>If the equality does not hold for any $$$m$$$, print $$$-1$$$ instead.</p><p>We can show that if the required $$$m$$$ exists, it does not exceed $$$5 \cdot 10^{18}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009648995277328757" id="id0036005871604735373" class="input-output-copier">Copy</div></div><pre id="id009648995277328757"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">10 8</div><div class="test-example-line test-example-line-even test-example-line-2">10 10</div><div class="test-example-line test-example-line-odd test-example-line-3">10 42</div><div class="test-example-line test-example-line-even test-example-line-4">20 16</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000000000000 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007926987015482669" id="id005147962316744462" class="input-output-copier">Copy</div></div><pre id="id007926987015482669">12
10
-1
24
1152921504606846976
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, $$$10\ \&\ 11 = 10$$$, but $$$10\ \&\ 11\ \&\ 12 = 8$$$, so the answer is $$$12$$$.</p><p>In the second example, $$$10 = 10$$$, so the answer is $$$10$$$.</p><p>In the third example, we can see that the required $$$m$$$ does not exist, so we have to print $$$-1$$$.</p></div>