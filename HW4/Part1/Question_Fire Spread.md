<h2>Problem Statement</h2>
<p>Tom Ward needs to solve a problem for his internship with John Gregory. The city of Preston is represented by an <code>n x m</code> rectangular grid. Each cell in this grid represents a building in the city. We know that Beni-Lizi the wizard starts a fire at <code>k</code> buildings at time zero. Every minute, the fire spreads from each burning building to all its adjacent (orthogonally) buildings. Once a building catches fire, it continues burning until it is completely consumed. Tom needs to determine the time it takes for the last building to catch fire.</p>

<h2>Input</h2>
<ul>
    <li>The first line contains two integers, <code>n</code> and <code>m</code>, representing the dimensions of the city grid.</li>
    <li>The second line contains an integer <code>k</code>, the number of buildings that are initially on fire.</li>
    <li>The following <code>k</code> lines each contain two integers, <code>(x_i, y_i)</code>, representing the coordinates of the buildings that are initially set on fire.</li>
</ul>

<h2>Output</h2>
<p>Output a single integer representing the time it takes for the last building to catch fire.</p>

<h2>Constraints</h2>
<ul>
    <li><code>1 ≤ n, m ≤ 2000</code></li>
    <li><code>1 ≤ k ≤ 10</code></li>
    <li><code>1 ≤ x_i ≤ n</code></li>
    <li><code>1 ≤ y_i ≤ m</code></li>
</ul>

<h2>Examples</h2>
<h3>Example 1</h3>
<pre><code>Input:
3 3
1
1 1

Output:
5
</code></pre>

<h3>Example 2</h3>
<pre><code>Input:
10 10
4
5 3
4 7
7 5
8 5

Output:
8
</code></pre>

<h2>Explanation</h2>
<p>In Example 1, the fire starts at (1,1). The fire will spread to all adjacent cells every minute. The last cell catches fire at minute 5.</p>
<p>In Example 2, the fire starts at the cells (5,3), (4,7), (7,5), and (8,5). The fire spreads to all adjacent cells every minute, and the last cell catches fire at minute 8.</p>
