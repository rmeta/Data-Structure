<h2>Defeating the Giant with Soldiers</h2>

<h3>Problem Description</h3>

<p>Erwin is a war commander with <code>n</code> soldiers, each with a strength <code>P<sub>i</sub></code>. He needs to defeat a giant with strength <code>z</code>. In one operation, Erwin can send a soldier with strength <code>P<sub>i</sub></code> to fight the giant, which decreases the giant's strength by <code>P<sub>i</sub></code>. After the operation, the soldier's strength becomes <code>floor(P<sub>i</sub>/2)</code>. The giant is defeated when its strength becomes 0 or less.</p>

<p>Erwin wants to defeat the giant in at most <code>k</code> operations. Help him determine if it's possible and, if so, print the minimum number of operations required. If it's not possible, print -1.</p>

<h3>Input</h3>

<ul>
  <li>The first line contains three integers: <code>n</code> (number of soldiers), <code>z</code> (strength of the giant), and <code>k</code> (maximum number of operations).</li>
  <li>The second line contains <code>n</code> integers representing the strengths <code>P<sub>i</sub></code> of the soldiers.</li>
</ul>

<p>Constraints:</p>
<ul>
  <li><code>1 ≤ n ≤ 10<sup>5</sup></code></li>
  <li><code>1 ≤ z ≤ 10<sup>16</sup></code></li>
  <li><code>1 ≤ k ≤ 10<sup>5</sup></code></li>
  <li><code>0 ≤ P<sub>i</sub> ≤ 10<sup>13</sup></code></li>
</ul>

<h3>Output</h3>

<p>Print the minimum number of operations required to defeat the giant. If it's not possible to defeat the giant within <code>k</code> operations, print -1.</p>

<h3>Example</h3>

<h4>Input</h4>
<pre><code>
2 35 10
6 22
</code></pre>

<h4>Output</h4>
<pre><code>
3
</code></pre>

<p>In this example:</p>
<ul>
  <li>Initially, the soldiers are [22, 6]. In operation 1, the soldier with strength 22 is sent, reducing the giant's strength to 13. The soldier's strength becomes 11.</li>
  <li>In operation 2, the soldier with strength 11 is sent, reducing the giant's strength to 2. The soldier's strength becomes 5.</li>
  <li>In operation 3, the soldier with strength 6 is sent, defeating the giant. So, a total of 3 operations are required.</li>
</ul>

<h4>Input</h4>
<pre><code>
6 100 321
1 2 3 4 5 6
</code></pre>

<h4>Output</h4>
<pre><code>
-1
</code></pre>

<p>In this example, the giant's strength is too high, and the soldiers cannot defeat it within the given number of operations.</p>
