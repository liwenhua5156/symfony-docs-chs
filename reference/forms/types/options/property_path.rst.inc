property_path
~~~~~~~~~~~~~

**type**: ``any`` **default**: ``the field's name``

Fields display a property value of the form's domain object by default. When
the form is submitted, the submitted value is written back into the object.

If you want to override the property that a field reads from and writes to,
you can set the ``property_path`` option. Its default value is the field's
name.

If you wish the field to be ignored when reading or writing to the object
you can set the ``property_path`` option to ``false``, but using
``property_path`` for this purpose is deprecated, you should use the
``mapped`` option.

.. versionadded:: 2.1
    The ``mapped`` option was introduced in Symfony 2.1 for this use-case.
