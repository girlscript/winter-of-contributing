# <h1>  <p align = "center"> **Huffman Coding** </p></h1>

Huffman Coding is a technique of compressing data to reduce its size without losing any of the details. It was first developed by David Huffman.

Huffman Coding is generally useful to compress the data in which there are frequently occurring characters. Here we assign variable-length codes to input characters, lengths of the assigned codes are based on the frequencies of corresponding characters. The most frequent character gets the smallest code and the least frequent character gets the largest code.
The variable-length codes assigned to input characters are Prefix Codes, means the codes (bit sequences) are assigned in such a way that the code assigned to one character is not the prefix of code assigned to any other character. This is how Huffman Coding makes sure that there is no ambiguity when decoding the generated bitstream.<br>

The algorithm builds the tree T corresponding to the optimal code in a bottom-up manner.
It begins with a set of |c| leaves and performs a sequence of  |c|-1 merging operations to create a final tree. The symbols are kept in the increasing order of frequency at each stage.<br>

Once the data is encoded, it has to be decoded. Decoding is done using the same tree.
The tree created helps in maintaing the property.

# <h2> <p align = "center">***Working of Huffman code:*** </p></h2>
#

Suppose we have to send the following string to a network:

## <p align = "center">BCAADDDCCACACAC</p>

We know, that each character occupies 8 bit. There are total of 15 characters in the above string. Thus, a total of 8*15 = 120 bits are required to send this string.

Using the Huffman coding algorithm, we can compress the string to a smaller size.

Huffman coding is done using following steps:

1. Calculate the frequency of each character in the string.<br>
<p align = "center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-character-frequency.png" height = "100" width = "300"/>
</p>

2. Sort the character in increasing order of the frequency. They are stored in a priortiy queue Q.<br>
<p align = "center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-character-frequency-sorted.png" height = "100" width = "300"/>
</p>

3. Make each unique character as a leaf node.

4. Create an empty node z. Assign the minimum frequency leaf to the left child of z and assign the second minimum frequency leaf to the right child of z. Set the value of the z as the sum of the above two minimum frequencies.

<p align = "center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-encoding-1.png" height = "200"/>
</p>

5. Remove these two minimum frequencies from Q and add the sum into the list of frequencies (* denote the internal nodes in the figure above).

6. Insert node z into the tree.

7. Repeat steps 3 to 5 for all the characters.

<p align = "center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-encoding-2.png" height = "200"/>
</p><br>
<hr>
<p align = "center"><img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-encoding-3.png" height = "200"/>
</p>

8. For each non-leaf node, assign 0 to the left edge and 1 to the right edge.


<p align = "center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/hf-encoding-4.png" height = "200"/>
</p>

While executing the steps we keep in mind that each stage symbols are ordered in ascending order of frequencies if after merging two nodes we get a node with the same frequency then this new node must be kept with the same value to get correct prefix codes. 

For sending the above string over a network, we have to send the tree as well as the above compressed-code. The total size is given by the table.<br>
<p align = "center">

| Character      | Frequency | Code     | Size    |
| :---           |    :----: |    :---: | ---:    |
| A              | 5         | 11       | 5*2 = 10|
| B              | 1         | 100      | 1*3 = 3 |
|c               | 6         | 0        | 6*1 = 6 |
|D               |3          | 101      | 3*3 = 9 |
|4*8 = 32 bits   | 15 bits   |          | 28 bits |

</p><br>
Without encoding, the total size of the string was 120 bits.
After encoding the size is reduced to 32 + 15 + 28 = 75.

# <i><h2><p align = "center"> ***Algorithm*** </i></h2></p>
#
Now based on this concept algorithm is given as,
```
1. n -> | c |

2. Q <- | c |

3.   for i <- 1 to n-1

        do z <- ALLOCATE-NODE(   )
            x <- left (z) <- EXTRACT-MIN(Q)
            y <- right (z) <- EXTRACT-MIN(Q)
            f(z) <- f(x) + f(y)
            INSERT(Q , z)

return  EXTRACT-MIN(Q)
```

Here, frequency values are stored in prioroty queue Q every time new node z is created minimum is found through EXTRACT-MIN along all values in Q then next minimum is found and is finally merged to create new node z and this node is inserted into Q. This procss is repeated till final Huffman tree is created.

# <i><h2><p align = "center"> ***Code for implementation of algorithm*** </p></i></h2>
#
```
// Huffman Coding in Java

import java.util.PriorityQueue;
import java.util.Comparator;

class HuffmanNode {
  int item;
  char c;
  HuffmanNode left;
  HuffmanNode right;
}

// For comparing the nodes
class ImplementComparator implements Comparator<HuffmanNode> {
  public int compare(HuffmanNode x, HuffmanNode y) {
    return x.item - y.item;
  }
}

// IMplementing the huffman algorithm
public class Huffman {
  public static void printCode(HuffmanNode root, String s) {
    if (root.left == null && root.right == null && Character.isLetter(root.c)) {

      System.out.println(root.c + "   |  " + s);

      return;
    }
    printCode(root.left, s + "0");
    printCode(root.right, s + "1");
  }

  public static void main(String[] args) {

    int n = 4;
    char[] charArray = { 'A', 'B', 'C', 'D' };
    int[] charfreq = { 5, 1, 6, 3 };

    PriorityQueue<HuffmanNode> q = new PriorityQueue<HuffmanNode>(n, new ImplementComparator());

    for (int i = 0; i < n; i++) {
      HuffmanNode hn = new HuffmanNode();

      hn.c = charArray[i];
      hn.item = charfreq[i];

      hn.left = null;
      hn.right = null;

      q.add(hn);
    }

    HuffmanNode root = null;

    while (q.size() > 1) {

      HuffmanNode x = q.peek();
      q.poll();

      HuffmanNode y = q.peek();
      q.poll();

      HuffmanNode f = new HuffmanNode();

      f.item = x.item + y.item;
      f.c = '-';
      f.left = x;
      f.right = y;
      root = f;

      q.add(f);
    }
    System.out.println(" Char | Huffman code ");
    System.out.println("--------------------");
    printCode(root, "");
  }
}
```

<br><i><h2> ***Analysis*** </i></h2><br>
For each of n-1 operations heap is being created in O(log n) time so total running time is **O(n log n)**

<br><i><h2> ***Huffman Coding Applications*** </i></h2><br>
<ul>
<li>Huffman coding is used in conventional compression formats like GZIP, BZIP2, PKZIP, etc.</li>
<li>For text and fax transmissions.</li>
<li>It is useful in cases where there is a series of frequently occurring characters.</li>
</ul>

<br><i><h2> ***References*** </i></h2><br>

<ul>
<li>https://www.programiz.com/dsa/huffman-coding</li>
<li>Book - Algorithm Analysis and Design <i>by Er. Deepak Gupta</i></li>
</ul>







