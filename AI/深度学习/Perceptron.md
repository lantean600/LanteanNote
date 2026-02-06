---
layout: default
title: "Perceptron"
mathjax: true
---

对输入数据进行线性二分类，只能解决线性可分问题。

```py
# 以AND门为例的简单感知机实现
def AND(x1, x2): 
	w1, w2, theta = 0.5, 0.5, 0.7 
	tmp = x1*w1 + x2*w2 
	if tmp <= theta: 
		return 0 
	elif tmp > theta: 
		return 1
```
