FROM gcc:latest

RUN apt-get update && apt-get install -y \
    cmake \
    git \
    make \
    unzip

WORKDIR /app

COPY . /app

RUN mkdir -p build && cd build && \
    cmake .. && make

CMD ["./build/hello_test"]