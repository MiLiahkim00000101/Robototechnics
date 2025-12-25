from setuptools import find_packages
from setuptools import setup

setup(
    name='sum_full_name_service',
    version='0.0.0',
    packages=find_packages(
        include=('sum_full_name_service', 'sum_full_name_service.*')),
)
