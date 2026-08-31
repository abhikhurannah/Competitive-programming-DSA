<h2><a href="https://codeforces.com/contest/1216/problem/C" target="_blank" rel="noopener noreferrer">1216C — White Sheet</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1216C](https://codeforces.com/contest/1216/problem/C) |

## Topics
`geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">C. White Sheet</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a white sheet of paper lying on a rectangle table. The sheet is a rectangle with its sides parallel to the sides of the table. If you will take a look from above and assume that the bottom left corner of the table has coordinates $$$(0, 0)$$$, and coordinate axes are left and bottom sides of the table, then the bottom left corner of the white sheet has coordinates $$$(x_1, y_1)$$$, and the top right — $$$(x_2, y_2)$$$.</p><p>After that two black sheets of paper are placed on the table. Sides of both black sheets are also parallel to the sides of the table. Coordinates of the bottom left corner of the first black sheet are $$$(x_3, y_3)$$$, and the top right — $$$(x_4, y_4)$$$. Coordinates of the bottom left corner of the second black sheet are $$$(x_5, y_5)$$$, and the top right — $$$(x_6, y_6)$$$. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/8e3c95a30e54f5d18c7521f4ef2c692756356d68.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">Example of three rectangles.</span> </center><p>Determine if some part of the white sheet can be seen from the above after the two black sheets are placed. The part of the white sheet can be seen if there is at least one point lying <span class="tex-font-style-bf">not strictly inside</span> the white sheet and <span class="tex-font-style-bf">strictly outside</span> of both black sheets.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains four integers $$$x_1, y_1, x_2, y_2$$$ $$$(0 \le x_1  \lt  x_2 \le 10^{6}, 0 \le y_1  \lt  y_2 \le 10^{6})$$$ — coordinates of the bottom left and the top right corners of the white sheet.</p><p>The second line of the input contains four integers $$$x_3, y_3, x_4, y_4$$$ $$$(0 \le x_3  \lt  x_4 \le 10^{6}, 0 \le y_3  \lt  y_4 \le 10^{6})$$$ — coordinates of the bottom left and the top right corners of the first black sheet.</p><p>The third line of the input contains four integers $$$x_5, y_5, x_6, y_6$$$ $$$(0 \le x_5  \lt  x_6 \le 10^{6}, 0 \le y_5  \lt  y_6 \le 10^{6})$$$ — coordinates of the bottom left and the top right corners of the second black sheet.</p><p><span class="tex-font-style-bf">The sides of each sheet of paper are parallel (perpendicular) to the coordinate axes.</span></p></div><div class="output-specification"><div class="section-title">Output</div><p>If some part of the white sheet can be seen from the above after the two black sheets are placed, print "<span class="tex-font-style-tt">YES</span>" (without quotes). Otherwise print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00399975222513991" id="id0030350104633643993" class="input-output-copier">Copy</div></div><pre id="id00399975222513991">2 2 4 4
1 1 3 5
3 1 5 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00036034154993873746" id="id0041186566901497623" class="input-output-copier">Copy</div></div><pre id="id00036034154993873746">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002757607526814362" id="id002598626082278854" class="input-output-copier">Copy</div></div><pre id="id002757607526814362">3 3 7 5
0 0 4 6
0 0 7 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007220012543536319" id="id009686159658954888" class="input-output-copier">Copy</div></div><pre id="id007220012543536319">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00748837818074142" id="id006396604607682421" class="input-output-copier">Copy</div></div><pre id="id00748837818074142">5 2 10 5
3 1 7 6
8 1 11 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009774522123530278" id="id001962930809272323" class="input-output-copier">Copy</div></div><pre id="id009774522123530278">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016716365309220538" id="id006916653241538969" class="input-output-copier">Copy</div></div><pre id="id0016716365309220538">0 0 1000000 1000000
0 0 499999 1000000
500000 0 1000000 1000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040948107325995453" id="id0014588303354768295" class="input-output-copier">Copy</div></div><pre id="id0040948107325995453">YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the white sheet is fully covered by black sheets.</p><p>In the second example the part of the white sheet can be seen after two black sheets are placed. For example, the point $$$(6.5, 4.5)$$$ lies not strictly inside the white sheet and lies strictly outside of both black sheets.</p></div>