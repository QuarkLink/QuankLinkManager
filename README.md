# QuankLinkManager 短链接管理系统

## 项目简介
QuankLinkManager 是一个短链接管理系统，提供链接缩短、访问统计等功能。

## 外部依赖
- MySQL: boost.mysql
- HTTP框架：cpp-httplib
- 构建工具：bazel
- 编译器要求：C++17

## 项目结构
```
QuankLinkManager/
├── config    # 解析配置文件
├── main.cc
├── metrics   # 监控指标
├── router    # 请求分发
├── service   # 业务逻辑
└── storage   # 数据存储
    ├── mysql
    └── redis
```

### 目录说明

1. **config/**
   - 负责解析配置文件，
   - 负责向其他组件提供配置信息

2. **metrics/**
   - 实现系统监控指标收集
   - 包含QPS、响应时间、错误率等指标

3. **router/**
   - 处理HTTP请求路由
   - 请求参数验证和预处理
   - 限流和鉴权

4. **service/**
   - 实现核心业务逻辑
   - 短链接生成、解析、统计等功能

5. **storage/**
   - 数据持久化层，抽象mysql和redis方法，向上提供统一的存储接口，外界不需要关心mysql和redis的处理细节
   - mysql/: 数据库操作封装
   - redis/: 缓存操作封装

### 技术栈：
- 网络框架：cpp-httplib
- 数据库：MySQL
- 缓存：Redis
- 监控：Prometheus

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


## 项目进度
- [ ] 项目基础架构搭建
- [ ] 数据库设计
- [ ] 核心功能实现
  - [ ] 短链接生成
  - [ ] 链接访问统计
  - [ ] 用户管理
- [ ] 监控系统集成
- [ ] 性能优化
- [ ] 文档完善





