<h2><a href="https://codeforces.com/contest/1498/problem/C" target="_blank" rel="noopener noreferrer">1498C — Planar Reflections</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1498C](https://codeforces.com/contest/1498/problem/C) |

## Topics
`brute force` `data structures` `dp`

---

## Problem Statement

<div class="header"><div class="title">C. Planar Reflections</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Gaurang has grown up in a mystical universe. He is faced by $$$n$$$ consecutive 2D planes. He shoots a particle of decay age $$$k$$$ at the planes.</p><p>A particle can pass through a plane directly, however, every plane produces an identical copy of the particle going in the opposite direction with a decay age $$$k-1$$$. If a particle has decay age equal to $$$1$$$, it will NOT produce a copy.</p><p>For example, if there are two planes and a particle is shot with decay age $$$3$$$ (towards the right), the process is as follows: (here, $$$D(x)$$$ refers to a single particle with decay age $$$x$$$) </p><ol><li> the first plane produces a $$$D(2)$$$ to the left and lets $$$D(3)$$$ continue on to the right; </li><li> the second plane produces a $$$D(2)$$$ to the left and lets $$$D(3)$$$ continue on to the right; </li><li> the first plane lets $$$D(2)$$$ continue on to the left and produces a $$$D(1)$$$ to the right; </li><li> the second plane lets $$$D(1)$$$ continue on to the right ($$$D(1)$$$ cannot produce any copies). </li></ol><p>In total, the final multiset $$$S$$$ of particles is $$$\{D(3), D(2), D(2), D(1)\}$$$. (See notes for visual explanation of this test case.)</p><p>Gaurang is unable to cope up with the complexity of this situation when the number of planes is too large. Help Gaurang find the size of the multiset $$$S$$$, given $$$n$$$ and $$$k$$$.</p><p>Since the size of the multiset can be very large, you have to output it modulo $$$10^9+7$$$.</p><p>Note: Particles can go back and forth between the planes without colliding with each other.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). Then, $$$t$$$ lines follow, each containing two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 1000$$$). </p><p>Additionally, the sum of $$$n$$$ over all test cases will not exceed $$$1000$$$, and the sum of $$$k$$$ over all test cases will not exceed $$$1000$$$. All test cases in one test are different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ integers. The $$$i$$$-th of them should be equal to the answer to the $$$i$$$-th test case.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007105208138545078" id="id005758733161369973" class="input-output-copier">Copy</div></div><pre id="id007105208138545078">4
2 3
2 2
3 1
1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009152622934143898" id="id008539348221231841" class="input-output-copier">Copy</div></div><pre id="id009152622934143898">4
3
1
2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00533449969247611" id="id002045408484997845" class="input-output-copier">Copy</div></div><pre id="id00533449969247611">3
1 1
1 500
500 250
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008663182978498893" id="id006637573180444671" class="input-output-copier">Copy</div></div><pre id="id008663182978498893">1
2
257950823
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let us explain the first example with four test cases. </p><p><span class="tex-font-style-bf">Test case 1</span>: ($$$n = 2$$$, $$$k = 3$$$) is already explained in the problem statement.</p><p>See the below figure of this simulation. Each straight line with a different color represents the path of a different particle. As you can see, there are four distinct particles in the multiset. Note that the vertical spacing between reflected particles is for visual clarity only (as mentioned before, no two distinct particles collide with each other)</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/91b8b91bc97b8e5dbdaf5b5beafb5787dd887133.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p><span class="tex-font-style-bf">Test case 2</span>: ($$$n = 2$$$, $$$k = 2$$$) is explained as follows:</p><ol><li> the first plane produces a $$$D(1)$$$ to the left and lets $$$D(2)$$$ continue on to the right; </li><li> the second plane produces a $$$D(1)$$$ to the left and lets $$$D(2)$$$ continue on to the right; </li><li> the first plane lets $$$D(1)$$$ continue on to the left ($$$D(1)$$$ cannot produce any copies).</li></ol><p>Total size of multiset obtained $$$\{D(1), D(1), D(2)\}$$$ is equal to three.</p><p><span class="tex-font-style-bf">Test case 3</span>: ($$$n = 3$$$, $$$k = 1$$$), there are three planes, but decay age is only one. So no new copies are produced while the one particle passes through the planes. Hence, the answer is one.</p><p><span class="tex-font-style-bf">Test case 4</span>: ($$$n = 1$$$, $$$k = 3$$$) there is only one plane. The particle produces a new copy to the left. The multiset $$$\{D(2), D(3)\}$$$ is of size two.</p></div>