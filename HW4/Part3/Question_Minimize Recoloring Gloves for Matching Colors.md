<h2>Problem Description</h2>
<p>John Gregory faces an urgent mission and needs to stay in Chipden for <code>m</code> days. In Chipden, there are hazardous materials, and each material requires a specific color of gloves to handle. Tom has <code>n</code> gloves, each of which can be one of <code>k</code> colors. The gloves are numbered from <code>1</code> to <code>n</code>.</p>

<p>John Gregory prepared a glove-wearing schedule for Tom, asking him to wear glove <code>l<sub>i</sub></code> on the left hand and glove <code>r<sub>i</sub></code> on the right hand on day <code>i</code>. John, in his hurry, did not check whether the gloves for each day were of the same color. To avoid embarrassment in front of Alice, Tom can use an unlimited number of colored buckets available in the guard's yard to recolor any glove to a new color. However, to avoid detection by the guard, Tom wants to minimize the number of gloves he needs to recolor.</p>

<h2>Input</h2>
<ul>
    <li>The first line contains three integers <code>n</code>, <code>m</code>, and <code>k</code>, representing the number of gloves, the number of days, and the number of available colors, respectively.</li>
    <li>The second line contains <code>n</code> integers <code>c<sub>1</sub></code>, <code>c<sub>2</sub></code>, ..., <code>c<sub>n</sub></code>, where <code>c<sub>i</sub></code> represents the initial color of glove <code>i</code>.</li>
    <li>Each of the next <code>m</code> lines contains two integers <code>l<sub>i</sub></code> and <code>r<sub>i</sub></code>, indicating the gloves Tom needs to wear on day <code>i</code>, with glove <code>l<sub>i</sub></code> on the left hand and glove <code>r<sub>i</sub></code> on the right hand.</li>
</ul>

<h2>Output</h2>
<p>Output a single integer representing the minimum number of gloves Tom needs to recolor.</p>

<h2>Constraints</h2>
<ul>
    <li><code>2 ≤ n ≤ 200000</code></li>
    <li><code>0 ≤ m ≤ 200000</code></li>
    <li><code>1 ≤ k ≤ 200000</code></li>
    <li><code>1 ≤ c<sub>i</sub> ≤ k</code></li>
    <li><code>1 ≤ l<sub>i</sub>, r<sub>i</sub> ≤ n</code> and <code>l<sub>i</sub> ≠ r<sub>i</sub></code></li>
</ul>

<h2>Example</h2>
<h3>Example 1</h3>
<pre><code>Input:
3 2 3
1 2 3
1 2
2 3

Output:
2
</code></pre>

<h3>Example 2</h3>
<pre><code>Input:
3 2 2
1 1 2
1 2
2 1

Output:
0
</code></pre>
