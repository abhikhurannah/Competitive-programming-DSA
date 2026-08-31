<h2><a href="https://codeforces.com/contest/1634/problem/C" target="_blank" rel="noopener noreferrer">1634C — OKEA</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1634C](https://codeforces.com/contest/1634/problem/C) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">C. OKEA</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text">People worry that computers will get too smart and take over the world, but the real problem is that they're too stupid and they've already taken over the world.</div><div class="epigraph-source">— Pedro Domingos</div></div><p>You work for a well-known department store that uses leading technologies and employs mechanistic work — that is, robots!</p><p>The department you work in sells $$$n \cdot k$$$ items. The first item costs $$$1$$$ dollar, the second item costs $$$2$$$ dollars, and so on: $$$i$$$-th item costs $$$i$$$ dollars. The items are situated on shelves. The items form a rectangular grid: there are $$$n$$$ shelves in total, and each shelf contains exactly $$$k$$$ items. We will denote by $$$a_{i,j}$$$ the price of $$$j$$$-th item (counting from the left) on the $$$i$$$-th shelf, $$$1 \le i \le n, 1 \le j \le k$$$.</p><p>Occasionally robots get curious and ponder on the following question: what is the mean price (arithmetic average) of items $$$a_{i,l}, a_{i,l+1}, \ldots, a_{i,r}$$$ for some shelf $$$i$$$ and indices $$$l \le r$$$? Unfortunately, the old robots can only work with whole numbers. If the mean price turns out not to be an integer, they break down.</p><p>You care about robots' welfare. You want to arrange the items in such a way that the robots cannot theoretically break. Formally, you want to choose such a two-dimensional array $$$a$$$ that:</p><ul> <li> Every number from $$$1$$$ to $$$n \cdot k$$$ (inclusively) occurs exactly once. </li><li> For each $$$i, l, r$$$, the mean price of items from $$$l$$$ to $$$r$$$ on $$$i$$$-th shelf is an integer. </li></ul><p>Find out if such an arrangement is possible, and if it is, give any example of such arrangement.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>The first and only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 500$$$) — the number of shelves and length of each shelf, respectively.</p><p>It is guaranteed that the sum $$$n$$$ over all test cases does not exceed $$$500$$$ and the sum $$$k$$$ over all test cases does not exceed $$$500$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the answer for each test case.</p><p>If such an arrangement exists, print "YES" on a single line. After that, print any example on $$$n$$$ lines of $$$k$$$ numbers each, one line per shelf. Each number from $$$1$$$ to $$$n \cdot k$$$ must occur exactly once in the output.</p><p>If no good arrangement exists, print a single word "NO" on its own line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023865392119049467" id="id007301247910565327" class="input-output-copier">Copy</div></div><pre id="id0023865392119049467"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 3</div><div class="test-example-line test-example-line-even test-example-line-4">3 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008146128419380382" id="id007962624870764751" class="input-output-copier">Copy</div></div><pre id="id008146128419380382">YES
1 
YES
1 3 
2 4 
NO
YES
1 
2 
3 
</pre></div></div></div>