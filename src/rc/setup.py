from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'rc'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aimaim',
    maintainer_email='aimaim@todo.todo',
    description='RC car controller package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'listener = rc.rc_control:main',
            'video = rc.video_pub:main',
            'test = rc.test_motor:main',
        ],
    },
)
