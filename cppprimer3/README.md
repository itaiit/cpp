## C����ַ�����string��׼��
�ܶ�c++�����ڱ�׼�����֮ǰ���Ѿ�д���ˣ���˿϶�û���õ�string��vector���ͣ����c++Ϊ����
�ɴ�������νӣ�ר���ṩ��һ�鹦�ܣ�����string��c�����ַ�����

����string��Ϊ�����ķ����п��Դ���c�����ַ�������֮�򲻿��Խ�string������c����ַ�����Ϊ�����ķ�����

��Ϊ���䣬c++�ṩ�˽�stringת��Ϊc����ַ����ķ�����`c_str()`�����ص�����һ��ָ�������ָ�룬��˿������µĴ��룺

```c++
string s = "hello";
const char *pch = s.c_str();
s = "world";

��ʱpch����ָ���ַ�����world����ָ��
����һֱʹ��ִ����c_str()���ص����飬���ִ�п���
```

## ����

�����ڲ��������͵�����ĳ�ʼֵ��ȷ����

����֮�䲻��ֱ�Ӹ�ֵ��

�����ܽ᣺https://blog.csdn.net/I_itaiit/article/details/84799164
