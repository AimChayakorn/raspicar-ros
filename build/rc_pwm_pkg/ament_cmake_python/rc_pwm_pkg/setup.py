from setuptools import find_packages
from setuptools import setup

setup(
    name='rc_pwm_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('rc_pwm_pkg', 'rc_pwm_pkg.*')),
)
