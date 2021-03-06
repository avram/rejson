# Developer notes

## Testing

Python is required for ReJSON's module test. Install it with `apt-get install python`. You'll also
need to have [redis-py](https://github.com/andymccurdy/redis-py) installed. The easiest way to get
it is using pip and running `pip install redis`.

Lastly, the module's test requires a path to the `redis-server` executable. The path is stored
in the `REDIS_SERVER_PATH` variable and can be set using CMake's `-D` switch as follows:

```bash
~/rejson$ cmake -D REDIS_SERVER_PATH=/path/to/redis-server --build build
```

Now, you can run the tests:

```bash
~/rejson$ cmake --build build --target test
...
```
