from setuptools import find_packages, setup

package_name = 'cleaning_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ms',
    maintainer_email='mihas05@mail.ru',
    description='Cleaning Robot simulation with turtlesim',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'client = cleaning_turtle.cleaning_action_client:main',
            'server = cleaning_turtle.cleaning_action_server:main',
        ],
    },
)
