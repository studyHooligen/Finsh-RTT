# Finsh-RTT
 基于RT-Thread-Nano移植Finsh控制台，硬件平台STM32H743IIT

## 文件组织

```C
--+ Finsh-RTT   //工程根目录
    --+ BSP     //BSP文件夹
        - uartFinshCharIO.c     //串口控制台驱动C
        - uartFinshCharIO.h     //串口控制台接口H
    --+ Thread  //用户自定义线程文件夹
        - ShellPort.c           //自定义的控制台功能线程
    --+ Middlewares\Third_Party\RT-Thread\bsp
        - board.c               //RTT的基础bsp初始化文件
    - README.md //帮助文件
    ...
```

## 详细说明教程

欢迎参考个人博客中的文章[Finsh移植](https://www.singularity-blog.top/2020/06/03/MCU%E7%A7%BB%E6%A4%8D%E6%8E%A7%E5%88%B6%E5%8F%B0/)
