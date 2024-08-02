<h1>Card Shuffling Problem</h1>

<p>Shuffling refers to the process of mixing and rearranging playing cards. In this problem, you will implement a specific shuffling technique. Initially, you have <code>n</code> cards numbered from 1 to <code>n</code>, stacked in order with card number <code>n</code> on top. You perform a series of operations to shuffle the cards.</p>

<p>In each operation, you pick the top card <code>x</code> and insert it between the <code>y<sup>th</sup></code> and <code>(y+1)<sup>th</sup></code> card in the remaining stack. You need to perform this operation <code>t</code> times.</p>

<h2>Algorithm for Generating Random Numbers</h2>

<p>You will use a random number generator based on the following algorithm to determine the values of <code>x</code> and <code>y</code> for each operation. The seed for this algorithm is provided in the input.</p>

<pre><code>
int seed; // get from user 
int a = 1103515245; 
int m = 2^31; 
int c = 12345; 

int RNG() {
    seed = (a * seed + c) % m; 
    return seed; 
}

int createRandom(int l, int r) {
    return (RNG() % (r - l + 1)) + l; 
}

void CalcXY() {
    int x = createRandom(0, n); 
    int y = createRandom(0, n - x); 
}
</code></pre>

<h2>Input</h2>

<ul>
    <li>In the first line, three integers are given: <code>n</code> (number of cards), <code>t</code> (number of operations), and <code>seed</code> (seed for the random number generator).</li>
</ul>

<p>Constraints:</p>
<ul>
    <li><code>1 ≤ n, t ≤ 10<sup>4</sup></code></li>
    <li><code>1 ≤ seed ≤ 10<sup>15</sup></code></li>
</ul>

<h2>Output</h2>

<p>Print the final state of the cards from the bottom to the top after performing all the operations.</p>

<h2>Example</h2>

<h3>Input</h3>
<pre><code>
5 1 11
</code></pre>

<h3>Output</h3>
<pre><code>
1 4 5 2 3
</code></pre>

<p>Explanation: For the first operation, <code>x</code> is computed to be 2 and <code>y</code> is computed to be 1. The cards [1, 2, 3, 4, 5] are shuffled to [1, 4, 5, 2, 3].</p>

<h3>Input</h3>
<pre><code>
6 14 1809224184
</code></pre>

<h3>Output</h3>
<pre><code>
6 4 3 2 1 5
</code></pre>

<p>Explanation: The values of <code>x</code> and <code>y</code> for the first six operations are as follows:</p>
<ul>
    <li>Operation 1: x = 1, y = 4</li>
    <li>Operation 2: x = 4, y = 0</li>
    <li>Operation 3: x = 1, y = 2</li>
    <li>Operation 4: x = 5, y = 0</li>
    <li>Operation 5: x = 5, y = 0</li>
    <li>Operation 6: x = 4, y = 2</li>
</ul>

<p>After performing these operations, the final order of the cards is [2, 6, 5, 1, 3, 4].</p>

</body>
</html>
