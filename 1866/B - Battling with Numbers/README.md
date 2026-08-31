<h2><a href="https://codeforces.com/contest/1866/problem/B" target="_blank" rel="noopener noreferrer">1866B — Battling with Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1866B](https://codeforces.com/contest/1866/problem/B) |

## Topics
`combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Battling with Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>On the trip to campus during the mid semester exam period, Chaneka thinks of two positive integers $$$X$$$ and $$$Y$$$. Since the two integers can be very big, both are represented using their prime factorisations, such that: </p><ul> <li> $$$X=A_1^{B_1}\times A_2^{B_2}\times\ldots\times A_N^{B_N}$$$ (each $$$A_i$$$ is prime, each $$$B_i$$$ is positive, and $$$A_1 \lt A_2 \lt \ldots \lt A_N$$$) </li><li> $$$Y=C_1^{D_1}\times C_2^{D_2}\times\ldots\times C_M^{D_M}$$$ (each $$$C_j$$$ is prime, each $$$D_j$$$ is positive, and $$$C_1 \lt C_2 \lt \ldots \lt C_M$$$) </li></ul><p>Chaneka ponders about these two integers for too long throughout the trip, so Chaneka's friend commands her "Gece, deh!" (move fast) in order to not be late for the exam.</p><p>Because of that command, Chaneka comes up with a problem, how many pairs of positive integers $$$p$$$ and $$$q$$$ such that $$$\text{LCM}(p, q) = X$$$ and $$$\text{GCD}(p, q) = Y$$$. Since the answer can be very big, output the answer modulo $$$998\,244\,353$$$.</p><p>Notes: </p><ul> <li> $$$\text{LCM}(p, q)$$$ is the smallest positive integer that is simultaneously divisible by $$$p$$$ and $$$q$$$. </li><li> $$$\text{GCD}(p, q)$$$ is the biggest positive integer that simultaneously divides $$$p$$$ and $$$q$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$N$$$ ($$$1 \leq N \leq 10^5$$$) — the number of distinct primes in the prime factorisation of $$$X$$$.</p><p>The second line contains $$$N$$$ integers $$$A_1, A_2, A_3, \ldots, A_N$$$ ($$$2 \leq A_1  \lt  A_2  \lt  \ldots  \lt  A_N \leq 2 \cdot 10^6$$$; each $$$A_i$$$ is prime) — the primes in the prime factorisation of $$$X$$$.</p><p>The third line contains $$$N$$$ integers $$$B_1, B_2, B_3, \ldots, B_N$$$ ($$$1 \leq B_i \leq 10^5$$$) — the exponents in the prime factorisation of $$$X$$$.</p><p>The fourth line contains a single integer $$$M$$$ ($$$1 \leq M \leq 10^5$$$) — the number of distinct primes in the prime factorisation of $$$Y$$$.</p><p>The fifth line contains $$$M$$$ integers $$$C_1, C_2, C_3, \ldots, C_M$$$ ($$$2 \leq C_1  \lt  C_2  \lt  \ldots  \lt  C_M \leq 2 \cdot 10^6$$$; each $$$C_j$$$ is prime) — the primes in the prime factorisation of $$$Y$$$.</p><p>The sixth line contains $$$M$$$ integers $$$D_1, D_2, D_3, \ldots, D_M$$$ ($$$1 \leq D_j \leq 10^5$$$) — the exponents in the prime factorisation of $$$Y$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>An integer representing the number of pairs of positive integers $$$p$$$ and $$$q$$$ such that $$$\text{LCM}(p, q) = X$$$ and $$$\text{GCD}(p, q) = Y$$$, modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015714941570749952" id="id00005024685281269647" class="input-output-copier">Copy</div></div><pre id="id0015714941570749952">4
2 3 5 7
2 1 1 2
2
3 7
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00006173023625229979" id="id008943028693863369" class="input-output-copier">Copy</div></div><pre id="id00006173023625229979">8
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003978827003825136" id="id008813771928542651" class="input-output-copier">Copy</div></div><pre id="id0003978827003825136">2
1299721 1999993
100000 265
2
1299721 1999993
100000 265
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013922626403197447" id="id007349027523326644" class="input-output-copier">Copy</div></div><pre id="id0013922626403197447">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016262088486780668" id="id005702589993422336" class="input-output-copier">Copy</div></div><pre id="id0016262088486780668">2
2 5
1 1
2
2 3
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0080052468444903" id="id004325848157194826" class="input-output-copier">Copy</div></div><pre id="id0080052468444903">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the integers are as follows: </p><ul> <li> $$$X=2^2\times3^1\times5^1\times7^2=2940$$$ </li><li> $$$Y=3^1\times7^1=21$$$ </li></ul><p>The following are all possible pairs of $$$p$$$ and $$$q$$$: </p><ul> <li> $$$p=21$$$, $$$q=2940$$$ </li><li> $$$p=84$$$, $$$q=735$$$ </li><li> $$$p=105$$$, $$$q=588$$$ </li><li> $$$p=147$$$, $$$q=420$$$ </li><li> $$$p=420$$$, $$$q=147$$$ </li><li> $$$p=588$$$, $$$q=105$$$ </li><li> $$$p=735$$$, $$$q=84$$$ </li><li> $$$p=2940$$$, $$$q=21$$$ </li></ul><p>In the third example, the integers are as follows: </p><ul> <li> $$$X=2^1\times5^1=10$$$ </li><li> $$$Y=2^1\times3^1=6$$$ </li></ul><p>There is no pair $$$p$$$ and $$$q$$$ that simultaneously satisfies $$$\text{LCM}(p,q)=10$$$ and $$$\text{GCD}(p,q)=6$$$.</p></div>