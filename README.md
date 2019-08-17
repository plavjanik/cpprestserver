# Simple REST API Service in C++

This is a sample application that is used in this [Medium story](https://medium.com/@plape/using-boost-and-served-libraries-to-build-a-c-rest-api-service-449aeebe6509).

## Installation

### Prerequsites

- CMake
- Boost
- [Served](https://github.com/meltwater/served)

### Building

```bash
cd build
cmake ../ && make
```

Then execute:

```bash
../build/cpprestserver
```

Try:

```bash
curl "http://localhost:8123/api/v1/greeting?name=world"
```

The output should be:

```json
{ "content": "Hello, world" }
```
