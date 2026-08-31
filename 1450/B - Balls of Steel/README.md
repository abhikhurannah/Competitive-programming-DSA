<h2><a href="https://codeforces.com/contest/1450/problem/B" target="_blank" rel="noopener noreferrer">1450B — Balls of Steel</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1450B](https://codeforces.com/contest/1450/problem/B) |

## Topics
`brute force` `geometry` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Balls of Steel</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have $$$n$$$ <span class="tex-font-style-bf">distinct</span> points $$$(x_1, y_1),\ldots,(x_n,y_n)$$$ on the plane and a non-negative integer parameter $$$k$$$. Each point is a microscopic steel ball and $$$k$$$ is the attract power of a ball when it's charged. The attract power is the same for all balls.</p><p>In one operation, you can select a ball $$$i$$$ to charge it. Once charged, <span class="tex-font-style-bf">all</span> balls with Manhattan distance at most $$$k$$$ from ball $$$i$$$ move to the position of ball $$$i$$$. Many balls may have the same coordinate after an operation.</p><p>More formally, for all balls $$$j$$$ such that $$$|x_i - x_j| + |y_i - y_j| \le k$$$, we assign $$$x_j:=x_i$$$ and $$$y_j:=y_i$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/de36500cad32d8833b7289a7a5e37caa1adfb598.png" style="max-width: 100.0%;max-height: 100.0%;"> An example of an operation. After charging the ball in the center, two other balls move to its position. On the right side, the red dot in the center is the common position of those balls. </center><p>Your task is to find the minimum number of operations to move all balls to the same position, or report that this is impossible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$, $$$k$$$ ($$$2 \le n \le 100$$$, $$$0 \le k \le 10^6$$$) — the number of balls and the attract power of all balls, respectively.</p><p>The following $$$n$$$ lines describe the balls' coordinates. The $$$i$$$-th of these lines contains two integers $$$x_i$$$, $$$y_i$$$ ($$$0 \le x_i, y_i \le 10^5$$$) — the coordinates of the $$$i$$$-th ball.</p><p>It is guaranteed that all points are <span class="tex-font-style-bf">distinct</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer — the minimum number of operations to move all balls to the same position, or $$$-1$$$ if it is impossible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007826681301114824" id="id008311253843605433" class="input-output-copier">Copy</div></div><pre id="id0007826681301114824">3
3 2
0 0
3 3
1 1
3 3
6 7
8 8
6 9
4 1
0 0
0 1
0 2
0 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0038133242498435427" id="id004856635462175406" class="input-output-copier">Copy</div></div><pre id="id0038133242498435427">-1
1
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are three balls at $$$(0, 0)$$$, $$$(3, 3)$$$, and $$$(1, 1)$$$ and the attract power is $$$2$$$. It is possible to move two balls together with one operation, but not all three balls together with any number of operations.</p><p>In the second test case, there are three balls at $$$(6, 7)$$$, $$$(8, 8)$$$, and $$$(6, 9)$$$ and the attract power is $$$3$$$. If we charge any ball, the other two will move to the same position, so we only require one operation.</p><p>In the third test case, there are four balls at $$$(0, 0)$$$, $$$(0, 1)$$$, $$$(0, 2)$$$, and $$$(0, 3)$$$, and the attract power is $$$1$$$. We can show that it is impossible to move all balls to the same position with a sequence of operations.</p></div>