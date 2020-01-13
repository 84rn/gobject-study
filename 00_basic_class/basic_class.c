#include "basic_class.h" 

/* Structure of an instance */
struct _BasicClass 
{

};

/** Macro for defining certain basic functions of class/instance
 * 
 * // instance init function
 * static void basic_class_init (BasicClass *self);
 * // class init function
 * static void basic_class_class_init (BasicClassClass *klass);
 *
 * static gpointer basic_class_parent_class = NULL;
 *
 * // internal class meta-init function
 * static void basic_class_class_intern_init (gpointer klass)
 * {
 *    basic_class_parent_class = g_type_class_peek_parent (klass)
 *    basic_class_class_init ((BasicClassClass*) klass);
 * }
 *
 * GType basic_class_get_type (void)
 * {
 *   (... registers the type if called for the first time ...)
 * }
 *
 * (... define basic interface methods (??) ...)
 *
 * Only the _init, class_init functions and instance, class
 * structure have to be added.
 */

G_DEFINE_TYPE (BasicClass, basic_class, G_TYPE_OBJECT);


static void
basic_class_init (BasicClass *self)
{
}

static void
basic_class_class_init (BasicClassClass *klass)
{
}
