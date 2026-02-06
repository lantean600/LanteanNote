---
layout: default
title: "Batch Normalization"
mathjax: true
---

思路：
调整各层的激活值分布使其拥有适当的广度。为此，要向神经网络中插入对数据分布进行正规化的层。

优点：
• 可以使学习快速进行（可以增大学习率）。
• 不那么依赖初始值（对于初始值不用那么神经质）。 
• 抑制过拟合（降低 Dropout 等的必要性）。 

代码实现见[[归一化层(Normalization)]] 。
