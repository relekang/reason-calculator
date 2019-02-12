include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir: "path/to/test/lib/__snapshots__",
      projectDir: "path/to/your/project",
    });
});
