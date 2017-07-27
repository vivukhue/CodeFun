# CodeFun

Skill chèn mảng

Phần một : Chèn mảng với hai mảng cố định

**1&gt; Ý tưởng :**

 0           1             2           3            4             5           6            7           8            9           10         11         13       

| 1 | 2 | 3 | 4 | 5 | 10 | 11 | 12 | 13 |  |  |  |  |  |  |  |
| :---: | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |


```
0             1           2            3
```

| 6 | 7 | 8 | 9 |  |  |  |  |  |  |  |  |  |  |  |  |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |


Ta cần chèn mảng 2  vào vị trí thứ 4

đưa phần tử từ 8-&gt;4 lùi 4 ô

chèn phần tử mảng 2 vào chỗ cần chèn

**Đáp án :**

\#include &lt;stdio.h&gt;

\#include &lt;stdlib.h&gt;

void chenMang\(\) {

```
int arr\[100\] = {1, 2, 3, 4,7,8,9,10};

int chuoi\[\]={5,6};

int N =  8;

int M =  sizeof\(chuoi\)/sizeof\(chuoi\[0\]\);

int k;

scanf\("%d",&k\);

for\(int i=N-1;i&gt;=k;i--\)

{

    arr\[i+M\]=arr\[i\];

    arr\[i\]='\0';



}

for\(int a=M-1;a&gt;=0;a--\)

{

    arr\[a+k\]=chuoi\[a\];

}

    for \(int i = 0; i &lt; N+M; i++\) {

        printf\("%d\n", arr\[i\]\);

}
```

}

int ma\#include &lt;stdio.h&gt;

\#include &lt;stdlib.h&gt;

void chenMang\(\) {

```
int arr\[100\] = {1, 2, 3, 4,7,8,9,10};

int chuoi\[\]={5,6};

int N =  8;

int M =  sizeof\(chuoi\)/sizeof\(chuoi\[0\]\);

int k;

scanf\("%d",&k\);

for\(int i=N-1;i&gt;=k;i--\)

{

    arr\[i+M\]=arr\[i\];

    arr\[i\]='\0';



}

for\(int a=M-1;a&gt;=0;a--\)

{

    arr\[a+k\]=chuoi\[a\];

}

    for \(int i = 0; i &lt; N+M; i++\) {

        printf\("%d\n", arr\[i\]\);

}
```

}

int main\(\)

{

```
chenMang\(\);

return 0;
```

}

{

```
chenMang\(\);

return 0;
```

}

Phần 2 : Chèn mảng bất kỳ

**Ý tưởng :**

Như phần 1;

Lưu ý : Nên cho người sử dụng nhập số phần tử của từng mảng rồi đưa ra đúng số phần tử cho họ nhập

**Đáp án:**

\#include &lt;stdio.h&gt;

\#include &lt;stdlib.h&gt;

void nhapchuoi\(\)

{

```
while\(1\){

**//phai luon cap thua so luong phan tu trong chuoi
```

\*\*

```
int arr\[50\],chuoi\[50\],a,b,m,n,k,j,i;

printf\("Nhap so phan tu cho chuoi 1: "\);

scanf\("%d",&m\);



for\(a=0;a&lt;m;a++\)**//nhap so luong phan tu can nhap cho mang 1
```

\*\*

```
{

    printf\("Nhap vao phan tu thu %d cho chuoi 1: ",a+1\);

    scanf\("%d",&arr\[a\]\);//

}

printf\("Nhap so phan tu cho chuoi 2 : "\);

scanf\("%d",&n\);





for\(b=0;b&lt;n;b++\)

{

    printf\("Nhap vao phan tu thu %d cho chuoi 2 : ",b+1\);

    scanf\("%d",&chuoi\[b\]\);

}





printf\("Nhap vao vi tri can chen : "\);

scanf\("%d",&k\);

int N =  m;

int M =  n;
```

for\(i=N-1;i&gt;=k;i--\)

```
{

    arr\[i+M\]=arr\[i\];**//day lui phan tu tu vi tri can chen di M lan
```

\*\*

```
    arr\[i\]='\0';**//cho cho chuan bi chen rong
```

\*\*

**          
**

```
}

for\( j=M-1;j&gt;=0;j--\)

{

    arr\[j+k\]=chuoi\[j\];**//dua dan phan tu o mang 2 vao trong cho can chen
```

\*\*

```
}

    for \(i = 0; i &lt; N+M; i++\) {

        printf\("%d\n", arr\[i\]\);

}

}
```

}

int main\(\)

{

```
nhapchuoi\(\);

return 0;
```

}

