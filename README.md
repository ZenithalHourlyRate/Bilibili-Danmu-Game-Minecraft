# 【弹幕游戏】Minecraft --TNT -2D -3D

参考 https://www.bilibili.com/video/BV1us411m7Bf

当年不懂代码，胡乱写的，现在开源出来，也算是对当年的一个留念。

依照模糊的记忆，当年开发了两个版本，首先是 3D 版本，但是由于年轻啥也不懂，啥也调试不出来，所以最后又做了个能玩的 2D 版本，3D 版本权当演示。我已经不记得当时的目录结构和我是怎么部署的了，只能大体说说各个文件夹功能

* 3D 版本应该就躺在这个目录下
* release 下面躺的应该是 2D 版本
* fillhole 下面躺的是合并后的 2D 版本
* display 下面躺的是一堆提取资源素材（例如方块材质，开始菜单的模糊背景图）的 C++ 程序，其中还有生成矢量路径（Bilibili 的 logo，Mojang 的 logo）的部分，我也是服了当年的自己了
