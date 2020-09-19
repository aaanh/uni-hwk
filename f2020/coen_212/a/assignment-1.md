## COEN 212

## Assignment 1

Nguyen Hoang Anh

1. What is the exact number of bytes in a system that contains:
 <ol type='a'>
     <li>32KB = 32,000 bytes</li>
     <li>64MB = 64,000,000 bytes</li>
     <li>6.4GB = 6,400,000,000 bytes</li>
 </ol>

2. Largest binary number that can be expressed with 16 bits:

    (1111 1111 1111 1111)<sub>2</sub> = ?<sub>10</sub> = ?<sub>16</sub>

    - Base 10: 1&middot;2<sup>0</sup>+1&middot;2<sup>1</sup>+1&middot;2<sup>2</sup>+1&middot;2<sup>3</sup>+1&middot;2<sup>4</sup>+1&middot;2<sup>5</sup>+1&middot;2<sup>6</sup>+1&middot;2<sup>7</sup>+1&middot;2<sup>8</sup>+1&middot;2<sup>9</sup>+1&middot;2<sup>10</sup>+1&middot;2<sup>11</sup>+1&middot;2<sup>12</sup>+1&middot;2<sup>13</sup>+1&middot;2<sup>14</sup>+1&middot;2<sup>15</sup> = (65,535)<sub>10</sub>
    - Base 16: (1111)<sub>2</sub> = F<sub>16</sub> &rightarrow; (1111 1111 1111 1111)<sub>2</sub> = (FFFF)<sub>16</sub>

3. 64CD<sub>16</sub> = ?<sub>2</sub>

    - 6<sub>16</sub> = (0110)<sub>2</sub>
    - 4<sub>16</sub> = (0100)<sub>2</sub>
    - C<sub>16</sub> = (1100)<sub>2</sub>
    - D<sub>16</sub> = (1101)<sub>2</sub>

    &rightarrow; 64CD<sub>16</sub> = (0110 0100 1100 1101)<sub>2</sub>

4. Convert (431)<sub>10</sub> to base 2:

a. Directly:

| 431 | 2   | mod |     |     |
| --- | --- | --- | --- | --- |
| 215 | 2   | 1   |     |     |
| 107 | 2   | 1   |     |     |
| 53  | 2   | 1   |     |     |
| 26  | 2   | 1   |     |     |
| 13  | 2   | 0   |     |     |
| 6   | 2   | 1   |     |     |
| 3   | 2   | 0   |     |     |
| 1   | 2   | 1   |     |     |
| 1   | 2   | 0   |     |     |
