// #include <iostream>
// #include <unistd.h>

// #include "nwlog/nwlog.h"

// int main(int argc, char *argv[])
// {
//   // appname , 是否输出到文件，log保存的文件夹， 最小打印log等级
//   std::string log_path = "";
//   Vins::init_logging(argv[0], true, log_path, nwlog_level_e::NWLOG_INFO);

//   const float kPI = 3.1415926f;
//   NWLOG(module1, INFO, "%s: Hello, there. [PI = %f?]", argv[0], kPI);
//   NWLOG(module2, WARN, "Bye!");
//   NWLOG(module3, VERBOSE, "Can you see this log?");

//   float x_pos = 1.0f, y_pos = 2.0f, z_pos = 3.14f;

//   // 程序段计时功能用法
//   APROF_INIT(dump_alog_settings, true);
//   APROF_IN(dump_alog_settings);
//   Vins::dump_mlog_settings();
//   APROF_OUT(dump_alog_settings);

//   // 常规log打印, module name, log level, params and values
//   for (size_t i = 0; i < 100; i++)
//   {
//     NWLOG_LEVEL(vins, INFO, "x_pos_est %f, y_pos_est %f, z_pos_est %f", x_pos + i * 0.1, y_pos + i * 0.1, z_pos + i * 0.1);
//     NWLOG_LEVEL(vins, INFO, "x_pos %f, y_pos %f, z_pos %f", x_pos + i * 0.1, y_pos + i * 0.1, z_pos + i * 0.1);
//     usleep(10 * 1000);
//   }

//   return 0;
// }
