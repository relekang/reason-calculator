# calc

This is companion code for the blogpost [rolflekang.com/creating-a-cli-with-reason-native](https://rolflekang.com/creating-a-cli-with-reason-native).

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x CalcApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
