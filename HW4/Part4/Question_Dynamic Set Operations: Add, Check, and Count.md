
<body>
    <h1>Problem Statement</h1>
    <p>
        Tom and Grimalkin are playing a game involving a set of natural numbers <i>S</i>. Tom can perform the following operations in <i>q</i> steps:
    </p>
    <ol>
        <li><b>Add a number</b>: Ask Grimalkin to add the number <i>x</i> to the set <i>S</i>.</li>
        <li><b>Check existence</b>: Ask Grimalkin if the number <i>x</i> is present in the set <i>S</i>.</li>
        <li><b>Count smaller</b>: Request the count of numbers smaller than <i>x</i> in the set <i>S</i>.</li>
    </ol>
    <h2>Input</h2>
    <ul>
        <li>The first line contains the integer <i>q</i>, the number of operations Tom will perform.</li>
        <li>The following <i>q</i> lines describe the operations in one of the following formats:
            <ul>
                <li><code>1 x</code> — Add the number <i>x</i> to the set.</li>
                <li><code>2 x</code> — Check if the number <i>x</i> is in the set.</li>
                <li><code>3 x</code> — Find the number of elements smaller than <i>x</i> in the set.</li>
            </ul>
        </li>
    </ul>
    <h2>Constraints</h2>
    <ul>
        <li><i>1 ≤ q ≤ 10<sup>5</sup></i></li>
        <li><i>1 ≤ x ≤ 10<sup>5</sup></i></li>
    </ul>
    <h2>Output</h2>
    <ul>
        <li>For the <code>1 x</code> command, no output is required.</li>
        <li>For the <code>2 x</code> command, output <code>YES</code> if the number <i>x</i> is in the set, otherwise <code>NO</code>.</li>
        <li>For the <code>3 x</code> command, output the count of numbers in the set that are smaller than <i>x</i>.</li>
    </ul>
    <h2>Example</h2>
    <p>
        <b>Input:</b><br>
        7<br>
        1 5<br>
        2 7<br>
        1 4<br>
        1 6<br>
        2 4<br>
        1 10<br>
        3 8
    </p>
    <p>
        <b>Output:</b><br>
        NO<br>
        YES<br>
        3
    </p>
</body>
</html>
