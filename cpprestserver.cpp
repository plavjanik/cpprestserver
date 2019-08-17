#include <iostream>
#include <served/served.hpp>

int main(int argc, const char *argv[])
{
    served::multiplexer mux;
    mux.handle("/api/v1/greeting")
        .get([&](served::response &res, const served::request &req) {
            res << "{ \"content\": \"Hello, " << req.query["name"] << "!\" }\n";
        });

    std::cout << "Try this example with:" << std::endl;
    std::cout << "  curl \"http://localhost:8123/api/v1/greeting?name=world\"" << std::endl;

    served::net::server server("127.0.0.1", "8123", mux);
    server.run(10);

    return (EXIT_SUCCESS);
}
