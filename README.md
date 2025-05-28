外部依赖:
- mysql: boost.mysql
- http 框架：cpp-httplib


## 项目结构:
```
QuankLinkManager/
├── config    # 配置文件
├── main.cc
├── metrics   # 监控指标
├── router    # 请求分发
├── service   # 业务处理
└── storage   # 数据存储
    ├── mysql
    └── redis
```


---

TODO:
- CI/CD
  - 代码规范检查
  - 单元测试
  - 覆盖率测试（全量和增量）
- 前端
- 后端（先了解项目组织结构，之后可以考虑先从config开始实现）

openapi 可视化方法
- vscode 插件 swagger viewer
- [在线 editor](https://editor.swagger.io/)


