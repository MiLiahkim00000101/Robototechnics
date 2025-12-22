# clearing output of turtlesim on GI
ros2 service call /clear std_srvs/srv/Empty

# teleporting of turtle in coords, also working with services
ros2 service call /turtle1/teleport_absolute turtlesim/srv/TeleportAbsolute "{x: 5.0, y: 5.0, theta: 1.0}"

ros2 doctor --report

# Покажет наличие интерфейса
ros2 interface show turtlesim/action/RotateAbsolute

# Посмотреть какие команды в терминале может выполнить Покажет
ros2 pkg executables Cleaning_act_cl_svr 


# Работа с параметрами node

## Просмотр параметров
ros2 param list

## Получение и изменение параметров
При запущенном ```ros2 run turtlesim turtlesim_node``` 
 
ros2 param get /turtlesim background_g
ros2 param set /turtlesim background_g 255

### Просмотр всех параметров
ros2 param dump turtlesim
Дамп:
ros2 param dump turtlesim > turtlesim.yaml
Загрузка из дампа:
ros2 param load /turtlesim turtlesim.yaml

## Запуск черепахи с дампом параметров
ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml